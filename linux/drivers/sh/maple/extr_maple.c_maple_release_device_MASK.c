
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapleq {int recvbuf; struct mapleq* mq; } ;
struct maple_device {int recvbuf; struct maple_device* mq; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct mapleq*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 struct mapleq* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1)
{
 struct maple_device *VAR_2;
 struct mapleq *VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = VAR_2->mq;
 FUNC_1(VAR_0, VAR_3->recvbuf);
 FUNC_0(VAR_3);
 FUNC_0(VAR_2);
}
