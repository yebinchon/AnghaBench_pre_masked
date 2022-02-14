
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_dec1_private {int version; } ;
struct pwc_device {int release; struct pwc_dec1_private dec1; } ;



void FUNC_0(struct pwc_device *VAR_0, const unsigned char *VAR_1)
{
 struct pwc_dec1_private *VAR_2 = &VAR_0->dec1;

 VAR_2->version = VAR_0->release;
}
