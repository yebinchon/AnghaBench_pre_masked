
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct wl12xx_rx_filter_field {int pattern; void* len; void* flags; int offset; } ;
struct wl12xx_rx_filter {size_t num_fields; struct wl12xx_rx_filter_field* fields; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (int ,void* const*,void*) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct wl12xx_rx_filter *VAR_4,
     u16 VAR_5, u8 VAR_6,
     const u8 *VAR_7, u8 VAR_8)
{
 struct wl12xx_rx_filter_field *VAR_9;

 if (VAR_4->num_fields == VAR_3) {
  FUNC_3("Max fields per RX filter. can't alloc another");
  return -VAR_0;
 }

 VAR_9 = &VAR_4->fields[VAR_4->num_fields];

 VAR_9->pattern = FUNC_1(VAR_8, VAR_2);
 if (!VAR_9->pattern) {
  FUNC_3("Failed to allocate RX filter pattern");
  return -VAR_1;
 }

 VAR_4->num_fields++;

 VAR_9->offset = FUNC_0(VAR_5);
 VAR_9->flags = VAR_6;
 VAR_9->len = VAR_8;
 FUNC_2(VAR_9->pattern, VAR_7, VAR_8);

 return 0;
}
