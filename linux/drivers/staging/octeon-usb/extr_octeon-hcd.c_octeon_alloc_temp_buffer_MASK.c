
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct urb {int transfer_flags; int transfer_buffer_length; int transfer_buffer; scalar_t__ sg; scalar_t__ num_sgs; } ;
struct octeon_temp_buffer {int data; int orig_buffer; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct octeon_temp_buffer* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (struct urb*) ;

__attribute__((used)) static int FUNC_4(struct urb *VAR_3, gfp_t VAR_4)
{
 struct octeon_temp_buffer *VAR_5;

 if (VAR_3->num_sgs || VAR_3->sg ||
     (VAR_3->transfer_flags & VAR_2) ||
     !(VAR_3->transfer_buffer_length % sizeof(u32)))
  return 0;

 VAR_5 = FUNC_1(FUNC_0(VAR_3->transfer_buffer_length, sizeof(u32)) +
         sizeof(*VAR_5), VAR_4);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->orig_buffer = VAR_3->transfer_buffer;
 if (FUNC_3(VAR_3))
  FUNC_2(VAR_5->data, VAR_3->transfer_buffer,
         VAR_3->transfer_buffer_length);
 VAR_3->transfer_buffer = VAR_5->data;
 VAR_3->transfer_flags |= VAR_1;

 return 0;
}
