
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;
struct a2150_board {int dummy; } ;


 int FUNC_0 (struct a2150_board const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 struct a2150_board const* VAR_1 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static const struct a2150_board *FUNC_3(struct comedi_device *VAR_2)
{
 int VAR_3 = FUNC_1(FUNC_2(VAR_2->iobase + VAR_0));

 if (VAR_3 >= FUNC_0(VAR_1))
  return ((void*)0);

 return &VAR_1[VAR_3];
}
