
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int * setup_packet; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *,int ) ;

__attribute__((used)) static inline char FUNC_1(unsigned char *VAR_1,
    const struct urb *VAR_2, char VAR_3)
{

 if (VAR_2->setup_packet == ((void*)0))
  return 'Z';
 FUNC_0(VAR_1, VAR_2->setup_packet, VAR_0);
 return 0;
}
