
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_hid {size_t bufsize; int inbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,int ) ;

__attribute__((used)) static int FUNC_1(struct gb_hid *VAR_2, size_t VAR_3)
{
 VAR_2->inbuf = FUNC_0(VAR_3, VAR_1);
 if (!VAR_2->inbuf)
  return -VAR_0;

 VAR_2->bufsize = VAR_3;

 return 0;
}
