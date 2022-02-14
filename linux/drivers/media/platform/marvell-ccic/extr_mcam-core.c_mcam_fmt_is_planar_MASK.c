
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcam_format_struct {int planar; } ;
typedef int __u32 ;


 struct mcam_format_struct* FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(__u32 VAR_0)
{
 struct mcam_format_struct *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 return VAR_1->planar;
}
