
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct comedi_8254* pacer; } ;
struct comedi_cmd {int flags; } ;
struct comedi_8254 {unsigned int next_div1; unsigned int osc_base; unsigned int next_div; unsigned int next_div2; } ;
typedef enum scan_mode { ____Placeholder_scan_mode } scan_mode ;



 int VAR_0 ;


 void* FUNC_0 (unsigned int,unsigned int) ;
 void* FUNC_1 (unsigned int,unsigned int) ;
 unsigned int VAR_1 ;
 int FUNC_2 (struct comedi_8254*,unsigned int*,int) ;
 int FUNC_3 (unsigned int*,unsigned int) ;
 int FUNC_4 (unsigned int*,int) ;
 unsigned int FUNC_5 (struct comedi_cmd*,int) ;
 unsigned int FUNC_6 (struct comedi_cmd*,int) ;
 int FUNC_7 (struct comedi_cmd*,int,unsigned int) ;
 int FUNC_8 (struct comedi_cmd*,int,unsigned int) ;

__attribute__((used)) static void FUNC_9(struct comedi_device *VAR_2, struct comedi_cmd *VAR_3,
        enum scan_mode VAR_4)
{
 struct comedi_8254 *VAR_5 = VAR_2->pacer;
 unsigned int VAR_6 = FUNC_5(VAR_3, VAR_4);
 unsigned int VAR_7 = FUNC_6(VAR_3, VAR_4);
 unsigned int VAR_8;






 if (VAR_6 && VAR_7) {




  VAR_5->next_div1 = (VAR_7 - 1) /
       (VAR_5->osc_base * VAR_1) + 1;

  FUNC_4(&VAR_5->next_div1, 2);
  FUNC_3(&VAR_5->next_div1,
          VAR_1);

  VAR_8 = VAR_5->osc_base * VAR_5->next_div1;


  switch (VAR_3->flags & VAR_0) {
  default:
  case 129:
   VAR_5->next_div = FUNC_0(VAR_6,
           VAR_8);
   VAR_5->next_div2 = FUNC_0(VAR_7,
            VAR_8);
   break;
  case 128:
   VAR_5->next_div = FUNC_1(VAR_6,
             VAR_8);
   VAR_5->next_div2 = FUNC_1(VAR_7,
       VAR_8);
   break;
  case 130:
   VAR_5->next_div = VAR_6 / VAR_8;
   VAR_5->next_div2 = VAR_7 / VAR_8;
   break;
  }

  FUNC_4(&VAR_5->next_div, 2);
  FUNC_3(&VAR_5->next_div, VAR_1);
  FUNC_4(&VAR_5->next_div2, 2);
  FUNC_3(&VAR_5->next_div2,
          VAR_1);


  FUNC_7(VAR_3, VAR_4,
         VAR_8 * VAR_5->next_div);
  FUNC_8(VAR_3, VAR_4,
      VAR_8 * VAR_5->next_div2);
 } else if (VAR_7) {





  FUNC_2(VAR_5, &VAR_7,
      VAR_3->flags);
  FUNC_8(VAR_3, VAR_4, VAR_7);
 } else if (VAR_6) {





  FUNC_2(VAR_5, &VAR_6,
      VAR_3->flags);

  VAR_5->next_div = VAR_5->next_div2;
  FUNC_7(VAR_3, VAR_4, VAR_6);
 }
}
