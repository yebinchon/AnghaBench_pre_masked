
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct fwtty_peer {scalar_t__ connect_retries; int connect; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fwtty_peer*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct work_struct*) ;
 struct fwtty_peer* FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_4)
{
 struct fwtty_peer *VAR_5 = FUNC_3(FUNC_2(VAR_4), VAR_3);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 == -VAR_1 && ++VAR_5->connect_retries < VAR_2)
  FUNC_1(&VAR_5->connect, VAR_0);
}
