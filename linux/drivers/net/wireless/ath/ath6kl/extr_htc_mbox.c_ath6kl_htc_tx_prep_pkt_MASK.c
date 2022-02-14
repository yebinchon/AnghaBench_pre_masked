
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct htc_packet {int endpoint; scalar_t__ act_len; scalar_t__ buf; } ;
struct htc_frame_hdr {int* ctrl; int eid; int flags; int payld_len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct htc_packet *VAR_1, u8 VAR_2,
       int VAR_3, int VAR_4)
{
 struct htc_frame_hdr *VAR_5;

 VAR_1->buf -= VAR_0;
 VAR_5 = (struct htc_frame_hdr *)VAR_1->buf;


 FUNC_0((u16)VAR_1->act_len, &VAR_5->payld_len);
 VAR_5->flags = VAR_2;
 VAR_5->eid = VAR_1->endpoint;
 VAR_5->ctrl[0] = VAR_3;
 VAR_5->ctrl[1] = VAR_4;
}
