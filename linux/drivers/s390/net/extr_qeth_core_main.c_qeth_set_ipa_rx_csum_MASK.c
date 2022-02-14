
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct qeth_card*,int ) ;
 int FUNC_1 (struct qeth_card*,int ) ;
 int FUNC_2 (struct qeth_card*,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_5, bool VAR_6)
{
 int VAR_7 = (VAR_6) ? -VAR_0 : 0;
 int VAR_8;

 if (FUNC_0(VAR_5, VAR_1))
  VAR_7 = FUNC_2(VAR_5, VAR_6, VAR_1,
         VAR_3);
 if (!FUNC_1(VAR_5, VAR_2))

  return VAR_7;

 VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_1,
        VAR_4);

 if (VAR_6)

  return (VAR_8) ? VAR_7 : 0;


 return (VAR_8) ? VAR_8 : VAR_7;
}
