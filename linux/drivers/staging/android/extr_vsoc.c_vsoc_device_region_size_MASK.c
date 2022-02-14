
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vsoc_device_region {scalar_t__ region_begin_offset; scalar_t__ region_end_offset; } ;



__attribute__((used)) static inline uint32_t FUNC_0(struct vsoc_device_region *VAR_0)
{
 return VAR_0->region_end_offset - VAR_0->region_begin_offset;
}
