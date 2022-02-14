
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct filer_table {int dummy; } ;
struct ethhdr {int* h_source; int* h_dest; int h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int ,struct filer_table*) ;
 int FUNC_2 (int ,int ,struct filer_table*) ;
 scalar_t__ FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int*) ;

__attribute__((used)) static void FUNC_5(struct ethhdr *VAR_6, struct ethhdr *VAR_7,
      struct filer_table *VAR_8)
{
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;


 if (!FUNC_3(VAR_7->h_source)) {
  if (FUNC_4(VAR_7->h_source)) {
   VAR_9 = 0xFFFFFFFF;
   VAR_10 = 0xFFFFFFFF;
  } else {
   VAR_9 = VAR_7->h_source[0] << 16 |
       VAR_7->h_source[1] << 8 |
       VAR_7->h_source[2];
   VAR_10 = VAR_7->h_source[3] << 16 |
       VAR_7->h_source[4] << 8 |
       VAR_7->h_source[5];
  }

  FUNC_1(VAR_6->h_source[0] << 16 |
       VAR_6->h_source[1] << 8 |
       VAR_6->h_source[2],
       VAR_9, VAR_3, VAR_8);

  FUNC_1(VAR_6->h_source[3] << 16 |
       VAR_6->h_source[4] << 8 |
       VAR_6->h_source[5],
       VAR_10, VAR_4, VAR_8);
 }

 if (!FUNC_3(VAR_7->h_dest)) {

  if ((FUNC_3(VAR_6->h_dest) &&
      FUNC_4(VAR_7->h_dest))) {
   FUNC_2(VAR_5, VAR_5, VAR_8);
  } else {
   if (FUNC_4(VAR_7->h_dest)) {
    VAR_9 = 0xFFFFFFFF;
    VAR_10 = 0xFFFFFFFF;
   } else {
    VAR_9 = VAR_7->h_dest[0] << 16 |
        VAR_7->h_dest[1] << 8 |
        VAR_7->h_dest[2];
    VAR_10 = VAR_7->h_dest[3] << 16 |
        VAR_7->h_dest[4] << 8 |
        VAR_7->h_dest[5];
   }


   FUNC_1(VAR_6->h_dest[0] << 16 |
        VAR_6->h_dest[1] << 8 |
        VAR_6->h_dest[2],
        VAR_9, VAR_0, VAR_8);

   FUNC_1(VAR_6->h_dest[3] << 16 |
        VAR_6->h_dest[4] << 8 |
        VAR_6->h_dest[5],
        VAR_10, VAR_1, VAR_8);
  }
 }

 FUNC_1(FUNC_0(VAR_6->h_proto),
      FUNC_0(VAR_7->h_proto),
      VAR_2, VAR_8);
}
