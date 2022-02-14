
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {char* raid_name; int bg_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (char*,scalar_t__,char*,scalar_t__) ;
 int FUNC_2 (char*,char*) ;

void FUNC_3(u64 VAR_6, char *VAR_7, u32 VAR_8)
{
 int VAR_9;
 int VAR_10;
 char *VAR_11 = VAR_7;
 u64 VAR_12 = VAR_6;
 u32 VAR_13 = VAR_8;

 if (!VAR_12) {
  FUNC_2(VAR_11, "NONE");
  return;
 }
 do { if (VAR_12 & (VAR_1)) { VAR_10 = FUNC_1(VAR_11, VAR_13, "%s|", ("data")); if (VAR_10 < 0 || VAR_10 >= VAR_13) goto out_overflow; VAR_13 -= VAR_10; VAR_11 += VAR_10; VAR_12 &= ~(VAR_1); } } while (0);
 do { if (VAR_12 & (VAR_3)) { VAR_10 = FUNC_1(VAR_11, VAR_13, "%s|", ("system")); if (VAR_10 < 0 || VAR_10 >= VAR_13) goto out_overflow; VAR_13 -= VAR_10; VAR_11 += VAR_10; VAR_12 &= ~(VAR_3); } } while (0);
 do { if (VAR_12 & (VAR_2)) { VAR_10 = FUNC_1(VAR_11, VAR_13, "%s|", ("metadata")); if (VAR_10 < 0 || VAR_10 >= VAR_13) goto out_overflow; VAR_13 -= VAR_10; VAR_11 += VAR_10; VAR_12 &= ~(VAR_2); } } while (0);

 do { if (VAR_12 & (VAR_0)) { VAR_10 = FUNC_1(VAR_11, VAR_13, "%s|", ("single")); if (VAR_10 < 0 || VAR_10 >= VAR_13) goto out_overflow; VAR_13 -= VAR_10; VAR_11 += VAR_10; VAR_12 &= ~(VAR_0); } } while (0);
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  do { if (VAR_12 & (VAR_5[VAR_9].bg_flag)) { VAR_10 = FUNC_1(VAR_11, VAR_13, "%s|", (VAR_5[VAR_9].raid_name)); if (VAR_10 < 0 || VAR_10 >= VAR_13) goto out_overflow; VAR_13 -= VAR_10; VAR_11 += VAR_10; VAR_12 &= ~(VAR_5[VAR_9].bg_flag); } } while (0);



 if (VAR_12) {
  VAR_10 = FUNC_1(VAR_11, VAR_13, "0x%llx|", VAR_12);
  VAR_13 -= VAR_10;
 }

 if (VAR_13 < VAR_8)
  VAR_7[VAR_8 - VAR_13 - 1] = '\0';





out_overflow:;
}
