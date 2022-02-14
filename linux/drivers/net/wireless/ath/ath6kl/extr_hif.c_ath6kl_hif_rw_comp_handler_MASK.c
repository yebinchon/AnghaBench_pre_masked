
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htc_packet {int status; int context; int (* completion ) (int ,struct htc_packet*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct htc_packet*,int) ;
 int FUNC_1 (int ,struct htc_packet*) ;

int FUNC_2(void *VAR_1, int VAR_2)
{
 struct htc_packet *VAR_3 = VAR_1;

 FUNC_0(VAR_0, "hif rw completion pkt 0x%p status %d\n",
     VAR_3, VAR_2);

 VAR_3->status = VAR_2;
 VAR_3->completion(VAR_3->context, VAR_3);

 return 0;
}
