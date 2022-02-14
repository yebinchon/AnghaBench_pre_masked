
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_11__ {int h_buffer_credits; TYPE_1__* h_journal; } ;
typedef TYPE_2__ handle_t ;
struct TYPE_10__ {struct super_block* j_private; } ;


 TYPE_2__* FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int,unsigned int) ;
 int FUNC_6 (struct super_block*,int ,int ) ;

handle_t *FUNC_7(handle_t *VAR_1, unsigned int VAR_2,
     int VAR_3)
{
 struct super_block *VAR_4;
 int VAR_5;

 if (!FUNC_2(VAR_1))
  return FUNC_1();

 VAR_4 = VAR_1->h_journal->j_private;
 FUNC_6(VAR_4, VAR_1->h_buffer_credits,
       VAR_0);
 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5 < 0) {
  FUNC_4(VAR_1);
  return FUNC_0(VAR_5);
 }

 VAR_5 = FUNC_5(VAR_1, VAR_3, VAR_2);
 if (VAR_5 < 0)
  return FUNC_0(VAR_5);
 return VAR_1;
}
