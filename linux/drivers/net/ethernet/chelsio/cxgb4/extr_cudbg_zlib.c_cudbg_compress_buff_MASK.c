
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_stream_s {scalar_t__ total_out; scalar_t__ avail_out; scalar_t__ next_out; scalar_t__ avail_in; scalar_t__ next_in; int workspace; } ;
struct cudbg_init {int workspace; } ;
struct cudbg_compress_hdr {scalar_t__ decompress_size; scalar_t__ compress_size; int compress_id; } ;
struct cudbg_buffer {scalar_t__ offset; scalar_t__ size; scalar_t__ data; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_1 (struct z_stream_s*,int ,int) ;
 int FUNC_2 (struct z_stream_s*,int ) ;
 int FUNC_3 (struct z_stream_s*) ;
 int FUNC_4 (struct z_stream_s*,int ,int ,int ,int ,int ) ;

int FUNC_5(struct cudbg_init *VAR_10,
   struct cudbg_buffer *VAR_11,
   struct cudbg_buffer *VAR_12)
{
 struct cudbg_buffer VAR_13 = { 0 };
 struct z_stream_s VAR_14;
 struct cudbg_compress_hdr *VAR_15;
 int VAR_16;


 VAR_16 = FUNC_0(VAR_12, &VAR_13);
 if (VAR_16)
  return VAR_16;

 VAR_15 = (struct cudbg_compress_hdr *)VAR_13.data;
 VAR_15->compress_id = VAR_1;

 FUNC_1(&VAR_14, 0, sizeof(struct z_stream_s));
 VAR_14.workspace = VAR_10->workspace;
 VAR_16 = FUNC_4(&VAR_14, VAR_4,
          VAR_6, VAR_3,
          VAR_2, VAR_5);
 if (VAR_16 != VAR_8)
  return VAR_0;

 VAR_14.next_in = VAR_11->data;
 VAR_14.avail_in = VAR_11->size;
 VAR_14.next_out = VAR_12->data + VAR_12->offset;
 VAR_14.avail_out = VAR_12->size - VAR_12->offset;

 VAR_16 = FUNC_2(&VAR_14, VAR_7);
 if (VAR_16 != VAR_9)
  return VAR_0;

 VAR_16 = FUNC_3(&VAR_14);
 if (VAR_16 != VAR_8)
  return VAR_0;

 VAR_15->compress_size = VAR_14.total_out;
 VAR_15->decompress_size = VAR_11->size;
 VAR_12->offset += VAR_14.total_out;

 return 0;
}
