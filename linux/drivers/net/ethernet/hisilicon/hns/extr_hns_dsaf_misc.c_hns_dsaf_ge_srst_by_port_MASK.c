
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dsaf_device {int reset_offset; int dsaf_ver; TYPE_1__** mac_cb; } ;
struct TYPE_2__ {int port_rst_off; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct dsaf_device*) ;
 int FUNC_2 (struct dsaf_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct dsaf_device *VAR_7, u32 VAR_8,
         bool VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 if (VAR_8 >= VAR_0)
  return;

 if (!FUNC_1(VAR_7)) {
  VAR_10 = 0x1 << VAR_8;
  VAR_12 = VAR_7->mac_cb[VAR_8]->port_rst_off;

  VAR_11 = FUNC_0(VAR_7->dsaf_ver) ?
    0x1041041 : 0x2082082;
  VAR_11 <<= VAR_12;

  if (!VAR_9) {
   FUNC_2(VAR_7, VAR_4,
           VAR_10);

   FUNC_2(VAR_7, VAR_3,
           VAR_11);
  } else {
   FUNC_2(VAR_7, VAR_1,
           VAR_11);

   FUNC_2(VAR_7, VAR_2,
           VAR_10);
  }
 } else {
  VAR_10 = 0x15540;
  VAR_11 = FUNC_0(VAR_7->dsaf_ver) ? 0x100 : 0x40;

  VAR_10 <<= VAR_7->reset_offset;
  VAR_11 <<= VAR_7->reset_offset;

  if (!VAR_9) {
   FUNC_2(VAR_7, VAR_4,
           VAR_10);

   FUNC_2(VAR_7, VAR_6,
           VAR_11);
  } else {
   FUNC_2(VAR_7, VAR_2,
           VAR_10);

   FUNC_2(VAR_7, VAR_5,
           VAR_11);
  }
 }
}
