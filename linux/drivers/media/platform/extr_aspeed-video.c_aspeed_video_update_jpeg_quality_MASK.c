
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aspeed_video {int jpeg_quality; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct aspeed_video*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct aspeed_video *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2, VAR_3->jpeg_quality) |
  FUNC_0(VAR_1, VAR_3->jpeg_quality | 0x10);

 FUNC_1(VAR_3, VAR_0,
       VAR_2 | VAR_1,
       VAR_4);
}
