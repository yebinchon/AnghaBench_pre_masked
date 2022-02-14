
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct saa7164_port {int std; } ;



int FUNC_0(struct saa7164_port *VAR_0, v4l2_std_id *VAR_1)
{
 *VAR_1 = VAR_0->std;
 return 0;
}
