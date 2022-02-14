
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct urb {size_t transfer_buffer_length; int transfer_flags; int * transfer_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int * FUNC_0 (size_t const,int ) ;
 struct urb* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct urb*) ;

__attribute__((used)) static struct urb *FUNC_3(void)
{
 const size_t VAR_3 = VAR_2;
 u8 *VAR_4 = ((void*)0);
 struct urb *VAR_5 = FUNC_1(0, VAR_0);

 if (!VAR_5)
  return ((void*)0);

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (!VAR_4) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 VAR_5->transfer_buffer = VAR_4;
 VAR_5->transfer_buffer_length = VAR_3;
 VAR_5->transfer_flags |= VAR_1;
 return VAR_5;
}
