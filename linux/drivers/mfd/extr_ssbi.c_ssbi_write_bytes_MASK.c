
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ssbi {scalar_t__ controller_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ssbi*,int ) ;
 int FUNC_2 (struct ssbi*,int ,int ) ;
 int FUNC_3 (struct ssbi*,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct ssbi *VAR_5, u16 VAR_6, const u8 *VAR_7, int VAR_8)
{
 int VAR_9 = 0;

 if (VAR_5->controller_type == VAR_0) {
  u32 VAR_10 = FUNC_1(VAR_5, VAR_2);
  VAR_10 = FUNC_0(VAR_10, VAR_6);
  FUNC_3(VAR_5, VAR_10, VAR_2);
 }

 while (VAR_8) {
  VAR_9 = FUNC_2(VAR_5, VAR_4, 0);
  if (VAR_9)
   goto err;

  FUNC_3(VAR_5, ((VAR_6 & 0xff) << 16) | *VAR_7, VAR_1);
  VAR_9 = FUNC_2(VAR_5, 0, VAR_3);
  if (VAR_9)
   goto err;
  VAR_7++;
  VAR_8--;
 }

err:
 return VAR_9;
}
