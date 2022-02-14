
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct venus_core {int caps; } ;
struct hfi_buffer_alloc_mode_supported {scalar_t__ num_entries; scalar_t__ buffer_type; scalar_t__* data; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__,int ,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_2(struct venus_core *VAR_4, u32 VAR_5, u32 VAR_6, void *VAR_7)
{
 struct hfi_buffer_alloc_mode_supported *VAR_8 = VAR_7;
 u32 VAR_9 = VAR_8->num_entries;
 u32 *VAR_10;

 if (VAR_9 > VAR_2)
  return;

 VAR_10 = VAR_8->data;

 while (VAR_9--) {
  if (VAR_8->buffer_type == VAR_0 ||
      VAR_8->buffer_type == VAR_1)
   FUNC_1(VAR_4->caps, FUNC_0(VAR_4->caps),
           VAR_5, VAR_6, VAR_3, VAR_10, 1);

  VAR_10++;
 }
}
