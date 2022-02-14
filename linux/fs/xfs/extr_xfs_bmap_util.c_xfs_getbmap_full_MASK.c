
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct getbmapx {scalar_t__ bmv_length; int bmv_entries; int bmv_count; } ;



__attribute__((used)) static inline bool
FUNC_0(
 struct getbmapx *VAR_0)
{
 return VAR_0->bmv_length == 0 || VAR_0->bmv_entries >= VAR_0->bmv_count - 1;
}
