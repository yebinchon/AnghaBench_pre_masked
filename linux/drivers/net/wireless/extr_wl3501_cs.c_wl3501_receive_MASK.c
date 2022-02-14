
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wl3501_rx_hdr {int dummy; } ;
struct wl3501_card {int start_seg; } ;
typedef int next_addr1 ;
typedef int next_addr ;


 int VAR_0 ;
 int FUNC_0 (struct wl3501_card*,int,int*,int) ;

__attribute__((used)) static u16 FUNC_1(struct wl3501_card *VAR_1, u8 *VAR_2, u16 VAR_3)
{
 u16 VAR_4, VAR_5;
 u8 *VAR_6 = VAR_2 + 12;

 VAR_3 -= 12;
 FUNC_0(VAR_1, VAR_1->start_seg + 2,
       &VAR_4, sizeof(VAR_4));
 if (VAR_3 > VAR_0 - sizeof(struct wl3501_rx_hdr)) {
  FUNC_0(VAR_1,
        VAR_1->start_seg +
     sizeof(struct wl3501_rx_hdr), VAR_6,
        VAR_0 -
     sizeof(struct wl3501_rx_hdr));
  VAR_3 -= VAR_0 - sizeof(struct wl3501_rx_hdr);
  VAR_6 += VAR_0 - sizeof(struct wl3501_rx_hdr);
 } else {
  FUNC_0(VAR_1,
        VAR_1->start_seg +
     sizeof(struct wl3501_rx_hdr),
        VAR_6, VAR_3);
  VAR_3 = 0;
 }
 while (VAR_3 > 0) {
  if (VAR_3 > VAR_0 - 5) {
   FUNC_0(VAR_1, VAR_4 + 5, VAR_6,
         VAR_0 - 5);
   VAR_3 -= VAR_0 - 5;
   VAR_6 += VAR_0 - 5;
   FUNC_0(VAR_1, VAR_4 + 2, &VAR_5,
         sizeof(VAR_5));
   VAR_4 = VAR_5;
  } else {
   FUNC_0(VAR_1, VAR_4 + 5, VAR_6, VAR_3);
   VAR_3 = 0;
  }
 }
 return 0;
}
