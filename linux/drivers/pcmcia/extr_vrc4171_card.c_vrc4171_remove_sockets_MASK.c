
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vrc4171_socket {scalar_t__ slot; int pcmcia_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_5 ;
 struct vrc4171_socket* VAR_6 ;

__attribute__((used)) static void FUNC_1(void)
{
 struct vrc4171_socket *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (VAR_8 == VAR_1 && VAR_5 == VAR_2)
   continue;

  VAR_7 = &VAR_6[VAR_8];
  if (VAR_7->slot == VAR_3)
   FUNC_0(&VAR_7->pcmcia_socket);

  VAR_7->slot = VAR_4;
 }
}
