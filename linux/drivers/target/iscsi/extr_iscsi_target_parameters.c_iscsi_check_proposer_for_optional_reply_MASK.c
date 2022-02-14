
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_param {int name; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct iscsi_param*) ;
 scalar_t__ FUNC_1 (struct iscsi_param*) ;
 scalar_t__ FUNC_2 (struct iscsi_param*) ;
 scalar_t__ FUNC_3 (struct iscsi_param*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct iscsi_param*) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct iscsi_param *VAR_6,
          bool VAR_7)
{
 if (FUNC_1(VAR_6)) {
  if (!FUNC_5(VAR_6->value, VAR_4))
   FUNC_4(VAR_6);
 } else if (FUNC_2(VAR_6)) {
  if (!FUNC_5(VAR_6->value, VAR_5))
   FUNC_4(VAR_6);

  if (VAR_7) {



   if (!FUNC_5(VAR_6->name, VAR_1))
    FUNC_4(VAR_6);
  }
 } else if (FUNC_3(VAR_6)) {
  if (!FUNC_5(VAR_6->name, VAR_3))
   FUNC_4(VAR_6);

  if (VAR_7) {



   if (!FUNC_5(VAR_6->name, VAR_0))
    FUNC_4(VAR_6);




   if (!FUNC_5(VAR_6->name, VAR_2))
    FUNC_4(VAR_6);
  }
 } else if (FUNC_0(VAR_6))
  FUNC_4(VAR_6);
}
