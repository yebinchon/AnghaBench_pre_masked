
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sg_mapping_iter {size_t length; scalar_t__ addr; } ;
struct scatterlist {int dummy; } ;


 int SG_MITER_ATOMIC ;
 int SG_MITER_FROM_SG ;
 scalar_t__ memcmp (scalar_t__,int *,int) ;
 int min (size_t,size_t) ;
 scalar_t__ sg_miter_next (struct sg_mapping_iter*) ;
 int sg_miter_start (struct sg_mapping_iter*,struct scatterlist*,int ,int) ;
 int sg_miter_stop (struct sg_mapping_iter*) ;
 int sg_nents (struct scatterlist*) ;

__attribute__((used)) static int msb_sg_compare_to_buffer(struct scatterlist *sg,
     size_t offset, u8 *buffer, size_t len)
{
 int retval = 0, cmplen;
 struct sg_mapping_iter miter;

 sg_miter_start(&miter, sg, sg_nents(sg),
     SG_MITER_ATOMIC | SG_MITER_FROM_SG);

 while (sg_miter_next(&miter) && len > 0) {
  if (offset >= miter.length) {
   offset -= miter.length;
   continue;
  }

  cmplen = min(miter.length - offset, len);
  retval = memcmp(miter.addr + offset, buffer, cmplen) ? -1 : 0;
  if (retval)
   break;

  buffer += cmplen;
  len -= cmplen;
  offset = 0;
 }

 if (!retval && len)
  retval = -1;

 sg_miter_stop(&miter);
 return retval;
}
