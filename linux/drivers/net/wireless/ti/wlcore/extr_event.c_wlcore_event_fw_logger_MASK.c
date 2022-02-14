
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct wl1271 {int dummy; } ;
struct fw_logger_information {void* actual_buff_size; void* buff_write_ptr; void* buff_read_ptr; void* max_buff_size; } ;
typedef int fw_log ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct fw_logger_information*,int *,int) ;
 size_t FUNC_5 (size_t,size_t) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct wl1271*,int *,size_t) ;
 int FUNC_8 (struct wl1271*,size_t,int *,int ,int) ;
 int FUNC_9 (struct wl1271*,size_t,void*) ;

int FUNC_10(struct wl1271 *VAR_6)
{
 int VAR_7;
 struct fw_logger_information VAR_8;
 u8 *VAR_9;
 u32 VAR_10 = VAR_1;
 u32 VAR_11 = VAR_4;
 u32 VAR_12 = VAR_4 +
    VAR_2;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 size_t VAR_16;
 u32 VAR_17;

 VAR_9 = FUNC_2(VAR_5, VAR_0);
 if (!VAR_9) {
  FUNC_6("Fail to allocate fw logger memory");
  VAR_8.actual_buff_size = FUNC_0(0);
  goto out;
 }

 VAR_7 = FUNC_8(VAR_6, VAR_11, VAR_9, VAR_5,
     0);
 if (VAR_7 < 0) {
  FUNC_6("Fail to read logger buffer, error_id = %d",
        VAR_7);
  VAR_8.actual_buff_size = FUNC_0(0);
  goto free_out;
 }

 FUNC_4(&VAR_8, VAR_9, sizeof(VAR_8));

 if (FUNC_3(VAR_8.actual_buff_size) == 0)
  goto free_out;

 VAR_14 = FUNC_3(VAR_8.actual_buff_size);
 VAR_17 = (FUNC_3(VAR_8.buff_read_ptr) -
   VAR_10) - VAR_11;
 VAR_12 += FUNC_3(VAR_8.max_buff_size);
 VAR_13 = VAR_12 -
   (FUNC_3(VAR_8.buff_read_ptr) -
     VAR_10);
 VAR_14 = FUNC_5(VAR_14, VAR_13);
 VAR_16 = VAR_14;

 FUNC_7(VAR_6, &VAR_9[VAR_17], VAR_16);
 VAR_15 = VAR_11 + VAR_17 + FUNC_3(VAR_8.actual_buff_size) +
   VAR_10;

 VAR_16 = FUNC_3(VAR_8.actual_buff_size) - VAR_16;
 if (VAR_16) {
  FUNC_7(VAR_6,
      &VAR_9[VAR_2],
      VAR_16);
  VAR_15 = VAR_11 + VAR_2 + VAR_16 +
    VAR_10;
 }


 if (VAR_15 != FUNC_3(VAR_8.buff_write_ptr)) {
  FUNC_6("Calculate of clear addr Clear = %x, write = %x",
        VAR_15, FUNC_3(VAR_8.buff_write_ptr));
 }


 VAR_7 = FUNC_9(VAR_6, VAR_11 + VAR_3,
        VAR_8.buff_write_ptr);
free_out:
 FUNC_1(VAR_9);
out:
 return FUNC_3(VAR_8.actual_buff_size);
}
