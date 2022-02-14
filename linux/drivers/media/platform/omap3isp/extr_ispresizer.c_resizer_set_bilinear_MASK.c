
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_res_device {int dummy; } ;
struct isp_device {int dummy; } ;
typedef enum resizer_chroma_algo { ____Placeholder_resizer_chroma_algo } resizer_chroma_algo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct isp_device*,int ,int ,int ) ;
 int FUNC_1 (struct isp_device*,int ,int ,int ) ;
 struct isp_device* FUNC_2 (struct isp_res_device*) ;

__attribute__((used)) static void FUNC_3(struct isp_res_device *VAR_4,
     enum resizer_chroma_algo VAR_5)
{
 struct isp_device *VAR_6 = FUNC_2(VAR_4);

 if (VAR_5 == VAR_3)
  FUNC_1(VAR_6, VAR_2, VAR_0,
       VAR_1);
 else
  FUNC_0(VAR_6, VAR_2, VAR_0,
       VAR_1);
}
