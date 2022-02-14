
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct gaudio {int dummy; } ;
struct f_audio {struct gaudio card; } ;
struct TYPE_4__ {int ** tSamFreq; void* bNrChannels; } ;
struct TYPE_3__ {void* bNrChannels; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int*,int) ;
 void* FUNC_1 (struct gaudio*) ;
 int FUNC_2 (struct gaudio*) ;

__attribute__((used)) static void FUNC_3(struct f_audio *VAR_2)
{
 struct gaudio *VAR_3 = &VAR_2->card;
 u8 *VAR_4;
 int VAR_5;


 VAR_1.bNrChannels = FUNC_1(VAR_3);
 VAR_0.bNrChannels = FUNC_1(VAR_3);


 VAR_5 = FUNC_2(VAR_3);
 VAR_4 = VAR_0.tSamFreq[0];
 FUNC_0(VAR_4, &VAR_5, 3);



 return;
}
