
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_user_data {int ring_size; } ;



__attribute__((used)) static unsigned int FUNC_0(struct per_user_data *VAR_0,
           unsigned int VAR_1)
{
 return VAR_1 & (VAR_0->ring_size - 1);
}
