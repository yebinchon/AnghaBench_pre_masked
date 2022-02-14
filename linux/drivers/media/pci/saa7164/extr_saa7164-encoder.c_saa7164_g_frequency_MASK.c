
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; scalar_t__ tuner; } ;
struct saa7164_port {int freq; } ;


 int VAR_0 ;

int FUNC_0(struct saa7164_port *VAR_1, struct v4l2_frequency *VAR_2)
{
 if (VAR_2->tuner)
  return -VAR_0;

 VAR_2->frequency = VAR_1->freq;
 return 0;
}
