
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hva_h264_po {unsigned int bitstream_size; } ;
struct hva_h264_task {struct hva_h264_po po; } ;



__attribute__((used)) static unsigned int FUNC_0(struct hva_h264_task *VAR_0)
{
 struct hva_h264_po *VAR_1 = &VAR_0->po;

 return VAR_1->bitstream_size;
}
