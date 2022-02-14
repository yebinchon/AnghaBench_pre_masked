
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cxl_afu {scalar_t__ current_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cxl_afu*,int ,int ,int,int,int) ;
 int FUNC_1 (struct cxl_afu*,int ) ;
 int FUNC_2 (struct cxl_afu*,int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct cxl_afu *VAR_7)
{
 int VAR_8;
 u64 VAR_9;

 FUNC_3("AFU reset request\n");

 VAR_8 = FUNC_0(VAR_7, VAR_2, 0,
      VAR_3 | VAR_0,
      VAR_4 | VAR_1,
      0);






 if (VAR_7->current_mode == 0) {
  VAR_9 = FUNC_1(VAR_7, VAR_5);
  VAR_9 &= ~VAR_6;
  FUNC_2(VAR_7, VAR_5, VAR_9);
 }

 return VAR_8;
}
