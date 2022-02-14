
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vid_io_buf {void* hdr; void* buffer; } ;
struct ubi_device {int vid_hdr_shift; int vid_hdr_alsize; } ;


 int FUNC_0 (void*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(const struct ubi_device *VAR_0,
        struct ubi_vid_io_buf *VAR_1,
        void *VAR_2)
{
 if (VAR_2)
  FUNC_0(VAR_2, 0, VAR_0->vid_hdr_alsize);

 VAR_1->buffer = VAR_2;
 VAR_1->hdr = VAR_2 + VAR_0->vid_hdr_shift;
}
