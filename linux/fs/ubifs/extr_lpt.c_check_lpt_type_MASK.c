
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ubifs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ubifs_info const*,char*,int,int) ;
 int FUNC_2 (struct ubifs_info const*,int **,int*,int ) ;

__attribute__((used)) static int FUNC_3(const struct ubifs_info *VAR_2, uint8_t **VAR_3,
     int *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_1);
 if (VAR_6 != VAR_5) {
  FUNC_1(VAR_2, "invalid type (%d) in LPT node type %d",
     VAR_6, VAR_5);
  FUNC_0();
  return -VAR_0;
 }
 return 0;
}
