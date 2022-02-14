
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct gb_camera_fmt_info {scalar_t__ gb_format; } ;


 unsigned int FUNC_0 (struct gb_camera_fmt_info const*) ;
 struct gb_camera_fmt_info const* VAR_0 ;

__attribute__((used)) static const struct gb_camera_fmt_info *FUNC_1(u16 VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].gb_format == VAR_1)
   return &VAR_0[VAR_2];
 }

 return ((void*)0);
}
