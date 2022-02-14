
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvumi_hs_header {scalar_t__ frame_content; } ;



__attribute__((used)) static unsigned char
FUNC_0(struct mvumi_hs_header *VAR_0,
       unsigned short VAR_1)
{
 unsigned char *VAR_2;
 unsigned char VAR_3 = 0, VAR_4;

 VAR_2 = (unsigned char *) VAR_0->frame_content;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 ^= *VAR_2;
  VAR_2++;
 }

 return VAR_3;
}
