
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vid_io_buf {struct ubi_vid_hdr* hdr; } ;
struct ubi_vid_hdr {int dummy; } ;



__attribute__((used)) static inline struct ubi_vid_hdr *FUNC_0(struct ubi_vid_io_buf *VAR_0)
{
 return VAR_0->hdr;
}
