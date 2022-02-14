
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wmi_bit_rate_reply {int rate_index; } ;
struct wmi {int parent_dev; } ;
typedef int s8 ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__** VAR_4 ;

__attribute__((used)) static int FUNC_3(struct wmi *VAR_5, u8 *VAR_6, int VAR_7)
{
 struct wmi_bit_rate_reply *VAR_8;
 s32 VAR_9;
 u32 VAR_10, VAR_11;

 if (VAR_7 < sizeof(struct wmi_bit_rate_reply))
  return -VAR_1;

 VAR_8 = (struct wmi_bit_rate_reply *) VAR_6;

 FUNC_1(VAR_0, "rateindex %d\n", VAR_8->rate_index);

 if (VAR_8->rate_index == (s8) VAR_2) {
  VAR_9 = VAR_2;
 } else {
  VAR_11 = VAR_8->rate_index & 0x7f;
  if (FUNC_0(VAR_11 > (VAR_3 + 1)))
   return -VAR_1;

  VAR_10 = (VAR_8->rate_index & 0x80) ? 1 : 0;
  VAR_9 = VAR_4[VAR_11][VAR_10];
 }

 FUNC_2(VAR_5->parent_dev);

 return 0;
}
