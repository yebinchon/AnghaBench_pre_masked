
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cphy {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cphy*,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct cphy *VAR_4)
{

 FUNC_0(VAR_4, VAR_2, VAR_3, 0x0);


 if (FUNC_1(VAR_4->adapter)) {
  u32 VAR_5;

  FUNC_2(VAR_4->adapter, VAR_0, &VAR_5);
  VAR_5 &= ~VAR_1;
  FUNC_3(VAR_4->adapter, VAR_0, VAR_5);
 }
 return 0;
}
