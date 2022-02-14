
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct uvc_clock_sample {int host_sof; int dev_sof; } ;
typedef int s8 ;



__attribute__((used)) static u16 FUNC_0(const struct uvc_clock_sample *VAR_0)
{

 s8 VAR_1;

 VAR_1 = (VAR_0->host_sof - VAR_0->dev_sof) & 255;

 return (VAR_0->dev_sof + VAR_1) & 2047;
}
