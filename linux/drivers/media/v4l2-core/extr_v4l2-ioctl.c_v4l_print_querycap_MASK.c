
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int device_caps; int capabilities; int version; int bus_info; int card; int driver; } ;


 int FUNC_0 (char*,int,int ,int,int ,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_capability *VAR_2 = VAR_0;

 FUNC_0("driver=%.*s, card=%.*s, bus=%.*s, version=0x%08x, capabilities=0x%08x, device_caps=0x%08x\n",
  (int)sizeof(VAR_2->driver), VAR_2->driver,
  (int)sizeof(VAR_2->card), VAR_2->card,
  (int)sizeof(VAR_2->bus_info), VAR_2->bus_info,
  VAR_2->version, VAR_2->capabilities, VAR_2->device_caps);
}
