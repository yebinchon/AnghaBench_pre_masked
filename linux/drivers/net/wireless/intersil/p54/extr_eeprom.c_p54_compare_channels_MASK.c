
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54_channel_entry {int freq; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0,
    const void *VAR_1)
{
 const struct p54_channel_entry *VAR_2 = VAR_0;
 const struct p54_channel_entry *VAR_3 = VAR_1;

 return VAR_2->freq - VAR_3->freq;
}
