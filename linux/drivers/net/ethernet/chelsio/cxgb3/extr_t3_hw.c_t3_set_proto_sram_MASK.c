
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adapter {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct adapter*,int ,int,int,int,int) ;
 int FUNC_2 (struct adapter*,int ,int) ;

int FUNC_3(struct adapter *VAR_8, const u8 *VAR_9)
{
 int VAR_10;
 const __be32 *VAR_11 = (const __be32 *)VAR_9;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  FUNC_2(VAR_8, VAR_5, FUNC_0(*VAR_11++));
  FUNC_2(VAR_8, VAR_4, FUNC_0(*VAR_11++));
  FUNC_2(VAR_8, VAR_3, FUNC_0(*VAR_11++));
  FUNC_2(VAR_8, VAR_2, FUNC_0(*VAR_11++));
  FUNC_2(VAR_8, VAR_1, FUNC_0(*VAR_11++));

  FUNC_2(VAR_8, VAR_0, VAR_10 << 1 | 1 << 31);
  if (FUNC_1(VAR_8, VAR_0, 1, 1, 5, 1))
   return -VAR_6;
 }
 FUNC_2(VAR_8, VAR_0, 0);

 return 0;
}
