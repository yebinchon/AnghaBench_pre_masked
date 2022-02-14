
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterCtlBlk {int config; } ;


 int FUNC_0 (struct AdapterCtlBlk*,int ) ;
 int FUNC_1 (struct AdapterCtlBlk*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct AdapterCtlBlk*) ;

__attribute__((used)) static void FUNC_3(struct AdapterCtlBlk *VAR_4)
{

 FUNC_1(VAR_4, VAR_1, 0);
 FUNC_1(VAR_4, VAR_2, 0);


 if (VAR_4->config & VAR_0)
  FUNC_2(VAR_4);


 FUNC_0(VAR_4, VAR_3);
}
