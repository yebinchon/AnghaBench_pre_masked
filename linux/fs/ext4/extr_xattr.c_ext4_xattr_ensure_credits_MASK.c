
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_8__ {int h_buffer_credits; } ;
typedef TYPE_1__ handle_t ;


 int FUNC_0 (TYPE_1__*,int *,struct buffer_head*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,struct buffer_head*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct inode*,struct buffer_head*) ;

__attribute__((used)) static int FUNC_7(handle_t *VAR_0, struct inode *VAR_1,
         int VAR_2, struct buffer_head *VAR_3,
         bool VAR_4, bool VAR_5)
{
 int VAR_6;

 if (!FUNC_1(VAR_0))
  return 0;

 if (VAR_0->h_buffer_credits >= VAR_2)
  return 0;

 VAR_6 = FUNC_2(VAR_0, VAR_2 - VAR_0->h_buffer_credits);
 if (!VAR_6)
  return 0;
 if (VAR_6 < 0) {
  FUNC_5(VAR_1->i_sb, "Extend journal (error %d)", VAR_6);
  return VAR_6;
 }

 if (VAR_3 && VAR_4) {
  if (VAR_5)
   FUNC_6(VAR_1, VAR_3);
  VAR_6 = FUNC_0(VAR_0, ((void*)0), VAR_3);
  if (VAR_6) {
   FUNC_5(VAR_1->i_sb, "Handle metadata (error %d)",
         VAR_6);
   return VAR_6;
  }
 }

 VAR_6 = FUNC_4(VAR_0, VAR_2);
 if (VAR_6) {
  FUNC_5(VAR_1->i_sb, "Restart journal (error %d)", VAR_6);
  return VAR_6;
 }

 if (VAR_3) {
  VAR_6 = FUNC_3(VAR_0, VAR_3);
  if (VAR_6) {
   FUNC_5(VAR_1->i_sb,
         "Get write access failed (error %d)",
         VAR_6);
   return VAR_6;
  }
 }
 return 0;
}
