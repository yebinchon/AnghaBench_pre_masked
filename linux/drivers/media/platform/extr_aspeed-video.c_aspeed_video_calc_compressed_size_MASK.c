
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aspeed_video {unsigned int max_compressed_size; int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aspeed_video*,int ,int) ;
 int FUNC_1 (int ,char*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct aspeed_video *VAR_2,
           unsigned int VAR_3)
{
 int VAR_4, VAR_5;
 u32 VAR_6 = 0;
 unsigned int VAR_7;
 const unsigned int VAR_8 = 4;
 const unsigned int VAR_9 = 1024;
 const unsigned int VAR_10 = VAR_3 / 2;

 VAR_2->max_compressed_size = VAR_0;

 for (VAR_4 = 0; VAR_4 < 6; ++VAR_4) {
  for (VAR_5 = 0; VAR_5 < 8; ++VAR_5) {
   VAR_7 = (VAR_8 << VAR_4) *
    (VAR_9 << VAR_5);
   if (VAR_7 < VAR_10)
    continue;

   if (VAR_7 < VAR_2->max_compressed_size) {
    VAR_6 = (VAR_4 << 3) | VAR_5;
    VAR_2->max_compressed_size = VAR_7;
   }
  }
 }

 FUNC_0(VAR_2, VAR_1,
      VAR_6);

 FUNC_1(VAR_2->dev, "Max compressed size: %x\n",
  VAR_2->max_compressed_size);
}
