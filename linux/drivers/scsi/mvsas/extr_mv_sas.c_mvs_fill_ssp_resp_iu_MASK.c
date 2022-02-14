
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ssp_response_iu {int datapres; int sense_data_len; int status; int sense_data; scalar_t__ response_data_len; } ;


 int FUNC_0 (int ,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ssp_response_iu *VAR_0,
    u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 VAR_0->datapres = 2;
 VAR_0->response_data_len = 0;
 VAR_0->sense_data_len = 17;
 VAR_0->status = 02;
 FUNC_0(VAR_0->sense_data, 17, 0,
   VAR_1, VAR_2, VAR_3);
}
