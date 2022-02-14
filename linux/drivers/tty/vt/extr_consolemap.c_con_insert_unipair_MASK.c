
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u16 ;
struct uni_pagedir {int*** uni_pgdir; int sum; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct uni_pagedir *VAR_2, u_short VAR_3, u_short VAR_4)
{
 int VAR_5, VAR_6;
 u16 **VAR_7, *VAR_8;

 VAR_7 = VAR_2->uni_pgdir[VAR_6 = VAR_3 >> 11];
 if (!VAR_7) {
  VAR_7 = VAR_2->uni_pgdir[VAR_6] = FUNC_0(32, sizeof(u16 *),
           VAR_1);
  if (!VAR_7) return -VAR_0;
  for (VAR_5 = 0; VAR_5 < 32; VAR_5++)
   VAR_7[VAR_5] = ((void*)0);
 }

 VAR_8 = VAR_7[VAR_6 = (VAR_3 >> 6) & 0x1f];
 if (!VAR_8) {
  VAR_8 = VAR_7[VAR_6] = FUNC_0(64, sizeof(u16), VAR_1);
  if (!VAR_8) return -VAR_0;
  FUNC_1(VAR_8, 0xff, 64*sizeof(u16));
 }

 VAR_8[VAR_3 & 0x3f] = VAR_4;

 VAR_2->sum += (VAR_4 << 20) + VAR_3;

 return 0;
}
