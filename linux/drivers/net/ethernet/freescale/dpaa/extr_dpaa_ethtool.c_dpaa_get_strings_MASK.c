
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
typedef int string_cpu ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char** VAR_5 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (char*,int ,int) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_6, u32 VAR_7,
        u8 *VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 char VAR_13[VAR_3];
 u8 *VAR_14;

 FUNC_1(VAR_13, 0, sizeof(VAR_13));
 VAR_14 = VAR_8;
 VAR_11 = FUNC_2();
 VAR_12 = VAR_1 * VAR_3;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   FUNC_3(VAR_13, VAR_3, "%s [CPU %d]",
     VAR_5[VAR_9], VAR_10);
   FUNC_0(VAR_14, VAR_13, VAR_3);
   VAR_14 += VAR_3;
  }
  FUNC_3(VAR_13, VAR_3, "%s [TOTAL]",
    VAR_5[VAR_9]);
  FUNC_0(VAR_14, VAR_13, VAR_3);
  VAR_14 += VAR_3;
 }
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   FUNC_3(VAR_13, VAR_3,
     "bpool %c [CPU %d]", 'a' + VAR_9, VAR_10);
   FUNC_0(VAR_14, VAR_13, VAR_3);
   VAR_14 += VAR_3;
  }
  FUNC_3(VAR_13, VAR_3, "bpool %c [TOTAL]",
    'a' + VAR_9);
  FUNC_0(VAR_14, VAR_13, VAR_3);
  VAR_14 += VAR_3;
 }
 FUNC_0(VAR_14, VAR_4, VAR_12);
}
