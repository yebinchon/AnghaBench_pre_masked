
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_buffer_length; int actual_length; int transfer_flags; int transfer_buffer; int pipe; int dev; } ;
struct c67x00_hcd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct c67x00_hcd*,struct urb*,char*,int,int,int,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct c67x00_hcd *VAR_4, struct urb *VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11;

 VAR_7 = FUNC_1(VAR_5->dev, FUNC_4(VAR_5->pipe),
          FUNC_5(VAR_5->pipe));
 VAR_6 = VAR_5->transfer_buffer_length - VAR_5->actual_length;

 VAR_10 = FUNC_2(VAR_5->dev, VAR_5->pipe, FUNC_5(VAR_5->pipe));

 VAR_11 = (VAR_5->transfer_flags & VAR_1) &&
     FUNC_5(VAR_5->pipe) && !(VAR_6 % VAR_10);

 while (VAR_6 || VAR_11) {
  int VAR_12;
  char *VAR_13;

  VAR_12 = (VAR_6 > VAR_10) ? VAR_10 : VAR_6;
  if (!VAR_12)
   VAR_11 = 0;

  VAR_8 = FUNC_5(VAR_5->pipe) ? VAR_3 : VAR_2;
  VAR_13 = VAR_5->transfer_buffer + VAR_5->transfer_buffer_length -
      VAR_6;
  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_13, VAR_12, VAR_8, VAR_7,
           VAR_0);
  if (VAR_9)
   return VAR_9;

  VAR_7 ^= 1;
  VAR_6 -= VAR_12;
  if (FUNC_3(VAR_5->pipe))
   break;
 }

 return 0;
}
