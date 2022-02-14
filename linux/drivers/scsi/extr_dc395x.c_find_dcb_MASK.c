
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct DeviceCtlBlk {int dummy; } ;
struct AdapterCtlBlk {struct DeviceCtlBlk*** children; } ;



__attribute__((used)) static struct DeviceCtlBlk *FUNC_0(struct AdapterCtlBlk *VAR_0, u8 VAR_1, u8 VAR_2)
{
 return VAR_0->children[VAR_1][VAR_2];
}
